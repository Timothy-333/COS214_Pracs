#include <iostream>
#include "consumer.h"
#include "consumercreator.h"

int main() {
    consumerCreator myCreator;
    myCreator.setConsumer("OData");
    consumer* newO = myCreator.createConsumer();
    string JSONstr = "{ data inside { more data {}{a}{a}{a}} some more data {even more data} }";//"<section> data <section> data 2 </section> data 3 </section>" ;
    string XMLstr = "<section> data inside <section> more data </section> some more data <section>even more data</section> </section>";

    if (newO) {
        odataConsumer* odataCons = dynamic_cast<odataConsumer*>(newO);
        if (odataCons) {
            // Successfully created an odataConsumer instance
            // Call the parseData() function
            cout << odataCons->parseData(XMLstr) << endl;
        } else {
            // Handle the case when the consumer is not an odataConsumer
            std::cout << "Created consumer is not of type odataConsumer." << std::endl;
        }
        
        delete newO; // Don't forget to delete the consumer when done
    } else {
        // Handle the case when the consumer type is unknown or not supported
        std::cout << "Unknown or unsupported consumer type." << std::endl;
    }

    myCreator.setConsumer("JSON");
    consumer* newJ = myCreator.createConsumer();

    if (newJ) {
        jsonConsumer* jsonCons = dynamic_cast<jsonConsumer*>(newJ);
        if (jsonCons) {
            // Successfully created an jsonConsumer instance
            // Call the parseData() function
            cout << jsonCons->parseData(JSONstr) << endl;
        } else {
            // Handle the case when the consumer is not an odataConsumer
            std::cout << "Created consumer is not of type jsonConsumer." << std::endl;
        }
        
        delete newJ; // Don't forget to delete the consumer when done
    } else {
        // Handle the case when the consumer type is unknown or not supported
        std::cout << "Unknown or unsupported consumer type." << std::endl;
    }
    return 0;
}

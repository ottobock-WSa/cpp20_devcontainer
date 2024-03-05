#include <iostream>

template< typename Derived >
class Sensor {
    public:
        void initialize(){
            static_cast<Derived*>(this)->initializeImpl();
        };
        int read(){
            return static_cast<Derived*>(this)->readImpl();
        }
};


class TemperatureSensor: public Sensor<TemperatureSensor>{
    friend class Sensor<TemperatureSensor>;
    private:
        void initializeImpl(){
            std::cout << "Temperature Sensor init" << std::endl;
        }
        int readImpl(){
           // std::cout << "Temperature Sensor read" << std::endl;
            return 22;
        }
};


class HumiditySensor: public Sensor<HumiditySensor>{
    friend class Sensor<HumiditySensor>;
    private:
        void initializeImpl(){
            std::cout << "Humidity Sensor init" << std::endl;
        }
        int readImpl(){
           // std::cout << "Humidity Sensor read" << std::endl;
            return 50;
        }
};

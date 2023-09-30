#include "esphome.h"

class MyGlobals : public Component {
 public:
  bool checkInternet() {
    // Ping Google DNS 8.8.8.8
    IPAddress ip(8, 8, 8, 8);
    return Ping.ping(ip, 1);
  }
};

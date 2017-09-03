#include <cstdint>
#include "protocol.pb.h"

namespace rta {

    class Message {
    private:
        int64_t device;
    public:
        Message();
        virtual ~Message() = default;
    };

    bool test() 
    {
        Uuid uuid;
        return true;
    }
};

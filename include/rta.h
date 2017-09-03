#include <cstdint>

namespace rta {

    class Message {
    private:
        int64_t device;
    public:
        Message();
        virtual ~Message() = default;
    };
};

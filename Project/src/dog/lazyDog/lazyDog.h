#include "dog.h"

namespace Shelter {
    class LazyDog : public Dog {

    public:
        LazyDog(std::string name, int age, bool isHealthy);
        // LazyDog(const LazyDog &other);
        // LazyDog(LazyDog &&other);
        ~LazyDog();

        void playFetch() const override;

        LazyDog& operator=(const LazyDog &other);
    };
}
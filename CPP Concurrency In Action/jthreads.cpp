
#include <thread>

class custom_j_thread{
    std::thread t;

    public:
    custom_j_thread() noexcept = default;

    template<typename Callable, typename ... Args>
    explicit custom_j_thread(Callable&& func, Args&& ... args): 
        t(std::forward<Callable>(func),std::forward<Args>(args)...) 
    {}

    
}

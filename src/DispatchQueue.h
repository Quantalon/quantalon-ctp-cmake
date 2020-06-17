#ifndef CTP_WIN_TEST_DISPATCHQUEUE_H
#define CTP_WIN_TEST_DISPATCHQUEUE_H

#include <functional>
#include <queue>
#include <mutex>


class DispatchQueue {
    typedef std::function<void(void)> fp_t;

public:
    DispatchQueue(size_t thread_cnt = 1);
    ~DispatchQueue();

    // dispatch and copy
    void dispatch(const fp_t& op);
    // dispatch and move
    void dispatch(fp_t&& op);

    // Deleted operations
    DispatchQueue(const DispatchQueue& rhs) = delete;
    DispatchQueue(DispatchQueue&& rhs) = delete;
    DispatchQueue& operator=(const DispatchQueue& rhs) = delete;
    DispatchQueue& operator=(DispatchQueue&& rhs) = delete;

private:
    std::mutex lock_;
    std::vector<std::thread> threads_;
    std::queue<fp_t> q_;
    std::condition_variable cv_;
    bool quit_ = false;

    void dispatch_thread_handler(void);
};

#endif //CTP_WIN_TEST_DISPATCHQUEUE_H

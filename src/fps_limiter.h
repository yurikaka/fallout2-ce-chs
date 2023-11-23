#ifndef FPS_LIMITER_H
#define FPS_LIMITER_H

namespace fallout {

class FpsLimiter {
public:
    FpsLimiter(unsigned int fps = 120);
    void mark();
    void throttle() const;
    unsigned int getFps();

private:
    const unsigned int _fps;
    unsigned int _ticks;
};

} // namespace fallout

#endif /* FPS_LIMITER_H */

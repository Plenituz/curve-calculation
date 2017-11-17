#ifndef IINTERPOLATOR
#define IINTERPOLATOR
template<typename Out, typename In>
class IInterpolator
{
    virtual Out interpolate(In from, In to, double t) = 0;
};

#endif // IINTERPOLATOR

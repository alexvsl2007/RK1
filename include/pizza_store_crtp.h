#pragma once
#include <iostream>

template <typename Derived>
class PizzaStoreCRTP {
public:
    virtual ~PizzaStoreCRTP() = default;

    void MakePizza() {
        auto& derived = static_cast<Derived&>(*this);
        derived.MakeDough_();
        derived.PutTopping_();
        derived.BakePizza_();
    }
};

class DeliciousPizzaStoreCRTP : public PizzaStoreCRTP<DeliciousPizzaStoreCRTP> {
    friend class PizzaStoreCRTP<DeliciousPizzaStoreCRTP>;
private:
    void MakeDough_();
    void PutTopping_();
    void BakePizza_();
};

class PoorPizzaStoreCRTP : public PizzaStoreCRTP<PoorPizzaStoreCRTP> {
    friend class PizzaStoreCRTP<PoorPizzaStoreCRTP>;
private:
    void MakeDough_();
    void PutTopping_();
    void BakePizza_();
};

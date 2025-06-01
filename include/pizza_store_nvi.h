#pragma once
#include <iostream>

class PizzaStoreNVI {
public:
    virtual ~PizzaStoreNVI() = default;
    void MakePizza();
private:
    virtual void MakeDough_() = 0;
    virtual void PutTopping_() = 0;
    virtual void BakePizza_() = 0;
};

class DeliciousPizzaStoreNVI : public PizzaStoreNVI {
private:
    void MakeDough_() override;
    void PutTopping_() override;
    void BakePizza_() override;
};

class PoorPizzaStoreNVI : public PizzaStoreNVI {
private:
    void MakeDough_() override;
    void PutTopping_() override;
    void BakePizza_() override;
};

#ifndef ZMOGUS_H
#define ZMOGUS_H

#include <string>
#include <iostream>

class Zmogus {
protected:
    std::string vardas;
    std::string pavarde;

public:
    Zmogus() = default;
    Zmogus(const std::string& vardas, const std::string& pavarde)
        : vardas(vardas), pavarde(pavarde) {}

    Zmogus(Zmogus&& kitas)
        : vardas(std::move(kitas.vardas)), pavarde(std::move(kitas.pavarde)) {}
        
    virtual ~Zmogus() = default;

    virtual const std::string& getVardas() const = 0;
    virtual const std::string& getPavarde() const = 0;
    virtual void setVardas(const std::string& v) = 0;
    virtual void setPavarde(const std::string& p) = 0;

    virtual void print(std::ostream& os) const = 0;
    virtual void read(std::istream& in) = 0;

    friend std::ostream& operator<<(std::ostream& os, const Zmogus& z) {
        z.print(os);
        return os;
    }

    friend std::istream& operator>>(std::istream& in, Zmogus& z) {
        z.read(in);
        return in;
    }
};

#endif
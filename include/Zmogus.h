#ifndef ZMOGUS_H
#define ZMOGUS_H

#include <string>
#include <iostream>

/**
 * @file Zmogus.h
 * @brief Abstrakti bazine klase zmogui.
 * @author dziugasvas
 * @date 2026
 */

/**
 * @class Zmogus
 * @brief Abstrakti bazine klase, aprasanti zmogu.
 * Negalima tiesiogiai sukurti jos objektu.
 */

class Zmogus {
protected:
    std::string vardas; ///< Zmogaus vardas
    std::string pavarde; ///< Zmogaus pavarde

public:
    /// @brief Numatytasis konstruktorius
    Zmogus() = default;

    /// @brief Konstruktorius su parametrais
    Zmogus(const std::string& vardas, const std::string& pavarde)
        : vardas(vardas), pavarde(pavarde) {}

    /// @brief Perkelimo konstruktorius
    Zmogus(Zmogus&& kitas)
        : vardas(std::move(kitas.vardas)), pavarde(std::move(kitas.pavarde)) {}

    /// @brief Virtualus destruktorius
    virtual ~Zmogus() = default;

    /// @brief Grazina varda
    virtual const std::string& getVardas() const = 0;

    /// @brief Grazina pavarde
    virtual const std::string& getPavarde() const = 0;

    /// @brief Nustato varda
    virtual void setVardas(const std::string& v) = 0;

    /// @brief Nustato pavarde
    virtual void setPavarde(const std::string& p) = 0;

    /// @brief Spausdina objekta i srauta
    virtual void print(std::ostream& os) const = 0;

    /// @brief Nuskaito objekta is srauto
    virtual void read(std::istream& in) = 0;

    /// @brief Isvedimo operatorius
    friend std::ostream& operator<<(std::ostream& os, const Zmogus& z) {
        z.print(os);
        return os;
    }

    /// @brief Ivedimo operatorius
    friend std::istream& operator>>(std::istream& in, Zmogus& z) {
        z.read(in);
        return in;
    }
};

#endif
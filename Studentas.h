#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <iostream>
#include <string>
#include <vector>

class Studentas {
private:
    std::string vardas;
    std::string pavarde;
    std::vector<int> paz;
    int egz;
    double rez;
    double galutinisVid;
    double galutinisMed;

public:
    Studentas() : egz(0), rez(0.0), galutinisVid(0.0), galutinisMed(0.0) {}

    Studentas(std::istream& is);

    ~Studentas() = default;

    const std::string& getVardas() const { return vardas; }
    const std::string& getPavarde() const { return pavarde; }
    const std::vector<int>& getPaz() const { return paz; }
    int getEgz() const { return egz; }
    double getRez() const { return rez; }
    double getGalutinisVid() const { return galutinisVid; }
    double getGalutinisMed() const { return galutinisMed; }

    void setEgz(int naujasEgz) { egz = naujasEgz; }
    void setRez(double naujasRez) { rez = naujasRez; }
    void setGalutinisVid(double naujasGalutinisVid) { galutinisVid = naujasGalutinisVid; }
    void setGalutinisMed(double naujasGalutinisMed) { galutinisMed = naujasGalutinisMed; }

    void pridetiPaz(int pazymys) { paz.push_back(pazymys); }
    void isvalytiPaz() { paz.clear(); }

    std::istream& readStudent(std::istream& is);
};

#endif
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

    Studentas() 
       : egz(0), rez(0.0), galutinisVid(0.0), galutinisMed(0.0) {}

    ~Studentas() {
        vardas.clear();
        pavarde.clear();
        paz.clear();
        egz = 0;
        rez = 0.0; 
        galutinisMed = 0.0;
        galutinisVid = 0.0;
    }

    Studentas(const Studentas& kitas) 
       : vardas(kitas.vardas), pavarde(kitas.pavarde), 
       paz(kitas.paz), egz(kitas.egz), rez(kitas.rez), 
       galutinisVid(kitas.galutinisVid), galutinisMed(kitas.galutinisMed) {}
       
    Studentas(Studentas&& kitas)
      : vardas(std::move(kitas.vardas)),
        pavarde(std::move(kitas.pavarde)), 
        paz(std::move(kitas.paz)), 
        egz(std::move(kitas.egz)),
        rez(std::move(kitas.rez)), 
        galutinisVid(std::move(kitas.galutinisVid)), 
        galutinisMed(std::move(kitas.galutinisMed)) {
       kitas.egz = 0;
       kitas.rez = 0.0;
       kitas.galutinisVid = 0.0;
       kitas.galutinisMed = 0.0;
    }

    Studentas& operator=(const Studentas& kitas) {
        if (this != &kitas) {
            vardas = kitas.vardas;
            pavarde = kitas.pavarde;
            paz = kitas.paz;
            egz = kitas.egz;
            rez = kitas.rez;
            galutinisVid = kitas.galutinisVid;
            galutinisMed = kitas.galutinisMed;
        }
        return *this;
    }

    Studentas& operator=(Studentas&& kitas) {
        if (this != &kitas) {
            vardas = std::move(kitas.vardas);
            pavarde = std::move(kitas.pavarde);
            paz = std::move(kitas.paz);
            egz = std::move(kitas.egz);
            rez = std::move(kitas.rez);
            galutinisVid = std::move(kitas.galutinisVid);
            galutinisMed = std::move(kitas.galutinisMed);
            kitas.egz = 0;
            kitas.rez = 0.0;
            kitas.galutinisVid = 0.0;
            kitas.galutinisMed = 0.0;
        }
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const Studentas& s) {
        os << s.vardas << " " << s.pavarde << " ";
        for (int p : s.paz) {
            os << p << " ";
        }
        os << s.egz;
        return os;
    }

    const std::string& getVardas() const { return vardas; }
    const std::string& getPavarde() const { return pavarde; }
    const std::vector<int>& getPaz() const { return paz; }
    int getEgz() const { return egz; }
    double getRez() const { return rez; }
    double getGalutinisVid() const { return galutinisVid; }
    double getGalutinisMed() const { return galutinisMed; }

    void setVardas(const std::string& naujasVardas) { vardas = naujasVardas; }
    void setPavarde(const std::string& naujaPavarde) { pavarde = naujaPavarde; }
    void setPaz(const std::vector<int>& naujiPaz) { paz = naujiPaz; }
    void setEgz(int naujasEgz) { egz = naujasEgz; }
    void setRez(double naujasRez) { rez = naujasRez; }
    void setGalutinisVid(double naujasGalutinisVid) { galutinisVid = naujasGalutinisVid; }
    void setGalutinisMed(double naujasGalutinisMed) { galutinisMed = naujasGalutinisMed; }

    void pridetiPaz(int pazymys) { paz.push_back(pazymys); }
    void isvalytiPaz() { paz.clear(); }
};

#endif
#include "Studentas.h"
#include "testas.h"
#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>

void testDefaultConstructor() {
    Studentas s;
    assert(s.getVardas().empty());
    assert(s.getPavarde().empty());
    assert(s.getPaz().empty());
    assert(s.getEgz() == 0);
    assert(s.getRez() == 0.0);
    std::cout << "Default konstruktoriaus testas sekmingas\n";
}

void testCopyConstructor() {
    Studentas s;
    std::vector<int> paz = {5, 7, 8};
    s.setVardas("Tomas");
    s.setPavarde("Tomauskas");
    s.setPaz(paz);
    s.setEgz(7);
    Studentas kopija(s);
    assert(kopija.getVardas() == s.getVardas());
    assert(kopija.getPavarde() == s.getPavarde());
    assert(kopija.getPaz() == s.getPaz());
    assert(kopija.getEgz() == s.getEgz());
    kopija.setVardas("Kitas");
    assert(s.getVardas() == "Tomas");
    std::cout << "Copy konstruktoriaus testas sekmingas\n";
}

void testCopyAssignment() {
    Studentas s1;
    std::vector<int> paz = {4, 6, 9};
    s1.setVardas("Lukas");
    s1.setPavarde("Lukauskas");
    s1.setPaz(paz);
    s1.setEgz(8);
    Studentas s2;
    s2 = s1;
    assert(s2.getVardas() == s1.getVardas());
    assert(s2.getPavarde() == s1.getPavarde());
    assert(s2.getPaz() == s1.getPaz());
    assert(s2.getEgz() == s1.getEgz());
    s1 = s1;
    assert(s1.getVardas() == "Lukas");
    std::cout << "Copy assignment operatoriaus testas sekmingas\n";
}

void testMoveConstructor() {
    Studentas s;
    std::vector<int> paz = {3, 6, 10};
    s.setVardas("Mantas");
    s.setPavarde("Mantauskas");
    s.setPaz(paz);
    s.setEgz(6);
    Studentas perkeltas(std::move(s));
    assert(perkeltas.getVardas() == "Mantas");
    assert(perkeltas.getPaz() == paz);
    assert(perkeltas.getEgz() == 6);
    assert(s.getVardas().empty());
    assert(s.getPaz().empty());
    assert(s.getEgz() == 0);
    std::cout << "Move konstruktoriaus testas sekmingas\n";
}

void testMoveAssignment() {
    Studentas s;
    std::vector<int> paz = {7, 8, 10};
    s.setVardas("Erikas");
    s.setPavarde("Erikauskas");
    s.setPaz(paz);
    s.setEgz(9);
    Studentas perkeltas;
    perkeltas = std::move(s);
    assert(perkeltas.getVardas() == "Erikas");
    assert(perkeltas.getPaz() == paz);
    assert(perkeltas.getEgz() == 9);
    assert(s.getVardas().empty());
    assert(s.getPaz().empty());
    assert(s.getEgz() == 0);
    std::cout << "Move assignment operatoriaus testas sekmingas\n";
}

void testDestructor() {
    {
        Studentas s;
        s.setVardas("Laikinas");
        s.setPavarde("Laikinauskas");
        s.setEgz(5);
        std::vector<int> paz = {1, 2, 3};
        s.setPaz(paz);
    }
   std::cout << "Destructor konstruktoriaus testas sekmingas\n";
}

void testInputOutputOperators() {
    std::stringstream srautas("Rokas Rokauskas 5 6 7 8\n");
    Studentas s;
    srautas >> s;
    assert(s.getVardas() == "Rokas");
    assert(s.getPavarde() == "Rokauskas");
    assert(s.getPaz()[0] == 5);
    assert(s.getPaz()[1] == 6);
    assert(s.getPaz()[2] == 7);
    assert(s.getEgz() == 8);
    std::stringstream rezultatas;
    rezultatas << s;
    assert(rezultatas.str() == "Rokas Rokauskas 5 6 7 8");
    std::cout << "Įvesties/išvesties operatorių testas sekmingas\n";
}
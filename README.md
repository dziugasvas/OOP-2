# Projekto aprašymas

Ši programa skirta studentų duomenų apdorojimui ir analizavimui. Vartotojas gali:
- įvesti studentų duomenis ranka;
- automatiškai sugeneruoti pažymius arba studentų įrašus;
- nuskaityti studentų duomenis iš failo;
- sugeneruoti testinius failus;
- atlikti skirtingų konteinerių ir studentų skirstymo strategijų veikimo spartos tyrimų.

Programoje taip pat realizuotos trys studentų skirstymo strategijos, kurių veikimo laikas lyginamas su skirtingo dydžio duomenų failais ir naudojant vector, list bei deque konteinerius.

# Diegimas ir paleidimas
1. Nusiklonuokite repozitoriją:
```
git clone https://github.com/dziugasvas/OOP-1.git
cd OOP-1
```
2. Įsidiekite reikalingus įrankius (jei jų dar neturite):

macOS:
```
xcode-select --install
```

Linux (Ubuntu/Debian):
```
sudo apt update
sudo apt install build-essential
```
3. Sukompiliuokite programą:
```
make
```
4. Paleiskite programą:
```
make run
```

# Naudojimosi instrukcija

Paleidus programą pateikiamas meniu, kuriame galima pasirinkti norimą veiksmą.

Pagrindiniai pasirinkimai:
- įvesti studentų duomenis ranka;
- generuoti pažymius arba studentų įrašus;
- nuskaityti studentus iš failo;
- generuoti testinius failus;
- atlikti veikimo spartos tyrimus su skirtingais konteineriais ir strategijomis;
- išvesti rezultatus.

Pasirinkus atitinkamą meniu punktą, programa pateikia papildomas instrukcijas ekrane.

# Kompiuterio specifikacijos

|       CPU                |  RAM |    SSD     | 
|--------------------------|------|------------| 
| Apple M4 (10 branduolių) | 24GB | NVMe 512GB |      
------------------------------------------------

## v1.2 rezultatai

| Metodas                     | Sintaksė                                       | Paskirtis                                       |
|-----------------------------|------------------------------------------------|-------------------------------------------------|
| Copy konstruktorius         | `Studentas(const Studentas& kitas)`            | Kuriama objekto kopija                          |
| Copy priskyrimo operatorius | `Studentas& operator=(const Studentas& kitas)` | Objekto kopijos priskyrimas - b = a             |
| Move konstruktorius         | `Studentas(Studentas&& kitas)`                 | Objekto perkėlimas - Studentas b = std::move(a) |
| Move priskyrimo operatorius | `Studentas& operator=(Studentas&& kitas)`      | Objekto perkėlimas - b = std::move(a)           |
| Destruktorius               | `~Studentas()`                                 | Objekto sunaikinimas (veikia automatiškai)      |
----------------------------------------------------------------------------------------------------------------------------------

### I/O operatoriai
 
| Operatorius  | Paskirtis                             |
|--------------|---------------------------------------|
| `operator>>` | Nuskaito duomenis iš srauto į objektą |
| `operator<<` | Išveda objekto duomenis į srautą      |
--------------------------------------------------------

### Testų nuotrauka


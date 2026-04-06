# Projekto aprašymas

Ši programa skirta studentų duomenų apdorojimui ir analizavimui. Vartotojas gali:
- įvesti studentų duomenis ranka;
- automatiškai sugeneruoti pažymius arba studentų įrašus;
- nuskaityti studentų duomenis iš failo;
- sugeneruoti testinius failus;
- atlikti skirtingų konteinerių ir studentų skirstymo strategijų veikimo spartos tyrimu.

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

## v1.1 rezultatai

Šioje versijoje (v1.1) programa perrašyta naudojant `class` vietoje `struct`. 
Atliktas tyrimas siekiant palyginti šių dviejų realizacijų efektyvumą apdorojant studentų duomenis.

Testavimas atliktas:
- naudojant **vector konteinerį**
- taikant **3 skirstymo strategiją (partition)**
- su skirtingais kompiliatoriaus optimizavimo lygiais: **-O1, -O2, -O3**

# Tyrimo rezultatai

100000 studentų

| Optimizacija | Laikas (class) | Laikas (struct) | Failo dydis (class) | Failo dydis (struct) |
|--------------|----------------|-----------------|---------------------|----------------------|
| -O1          |  0.259675 s    |                 | 326 KB              |                      |
| -O2          |  0.249686 s    |                 | 309 KB              |                      |
| -O3          |  0.249245 s    |                 | 341 KB              |                      |
------------------------------------------------------------------------------------------------

1000000 studentų

| Optimizacija | Laikas (class) | Laikas (struct) | Failo dydis (class) | Failo dydis (struct) |
|--------------|----------------|-----------------|---------------------|----------------------|
| -O1          | 1.30572 s      |                 | 326 KB              |                      |
| -O2          | 1.25852 s      |                 | 309 KB              |                      |
| -O3          | 1.25299 s      |                 | 341 KB              |                      |
------------------------------------------------------------------------------------------------
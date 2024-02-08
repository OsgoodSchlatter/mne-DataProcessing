// Compile
// g++ -Wall -std=c++11 comptonTest.cxx -o comptonTest && ./comptonTest

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

float computeDefaultAngle(float energyEKeV, float energyGKeV)
{
    const float electronMassKeV = 510.99895000;
    float cosAngle1 = 1 - electronMassKeV / energyGKeV + electronMassKeV / (energyEKeV + energyGKeV);
    if (cosAngle1 < 1 && cosAngle1 > -1)
    {
        return 1 - 2 * pow(std::asin(cosAngle1 / 2), 2);
    }
    return -100.0;
}

int main()
{
    const vector<float> eeVector = {
        67941.8672, 148265.750, 221265.891, 211372.953, 144909.406, 208374.766, 180113.234, 113415.320,
        244529.219, 154693.859, 57815.7266, 48517.4297, 111427.633, 44456.5195, 122388.523, 50021.0742,
        211402.500, 237187.156, 26450.9902, 183725.344};
    const vector<float> egVector = {
        156211.781, 165564.312, 44844.2344, 30251.5898, 91047.4219, 184591.281, 243864.500, 239624.828,
        47976.1289, 162145.359, 7380.48486, 71683.7891, 241140.562, 95328.1484, 132011.188, 78232.0000,
        18459.6875, 39155.9609, 197348.500, 182669.297};

    cout << "Test evaluation of Compton scattering angle\n";

    for (size_t idx = 0; idx < eeVector.size(); ++idx)
    {
        const float energyEKeV = eeVector[idx]; // Energy of recoil electron
        const float energyGKeV = egVector[idx]; // Energy of scattered gamma ray
        cout
            << energyEKeV << ' ' << energyGKeV << ':'
            << ' ' << computeDefaultAngle(energyEKeV, energyGKeV)
            << '\n';
    }
}

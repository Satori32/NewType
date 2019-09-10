#pragma once
#include <cstddef>
#include <cmath>
//#include "PhysicsEnum.h"

enum class CalculationID : std::size_t {
	None,//maybe...
	Float8,//maybe...
	Float16,//maybe...
	Float32,//maybe...
	Float64,//maybe...
	Float80,//maybe...
	Meter,
	Speed,
	Gram,
	Newton,
	Metric,
	GravityConstant,
	Velocity,
	Second,
	Ampere,
	Kelvin,
	Mol,
	Candela,
	Hertz,
	Joule,
	Coulomb,
	Lumen,
	Watt,
	Volt,
	Radix,
};


template<class T, CalculationID PID>
class CalculationType {
public:
	typedef CalculationID ID;

	CalculationType(const T& In) :Value_(In) {}

	const T& Get() {
		return Value_;
	}

	const T& operator =(const T& In) {
		Value_ = In;
		return Value_;
	}

	operator const T& () {
		return Value_;
	}

protected:
	T Value_ = T(0);
};

template<class T> using Meter	= CalculationType<T, CalculationID::Meter>;
template<class T> using Speed	= CalculationType<T, CalculationID::Speed>;
template<class T> using Gram	= CalculationType<T, CalculationID::Gram>;
template<class T> using Newton	= CalculationType<T, CalculationID::Newton>;
template<class T> using Metric	= CalculationType<T, CalculationID::Metric>;
template<class T> using Gravity = CalculationType<T, CalculationID::GravityConstant>;
template<class T> using Velocity= CalculationType<T, CalculationID::Velocity>;
template<class T> using Second = CalculationType<T, CalculationID::Second>;
template<class T> using Ampere = CalculationType<T, CalculationID::Ampere>;
template<class T> using Kelvin = CalculationType<T, CalculationID::Kelvin>;
template<class T> using Mol = CalculationType < T, CalculationID::Mol>;
template<class T> using Candela = CalculationType < T, CalculationID::Candela>;
template<class T> using Hertz = CalculationType < T, CalculationID::Hertz>;
template<class T> using Joule = CalculationType < T, CalculationID::Joule>;
template<class T> using Coulomb = CalculationType < T, CalculationID::Coulomb>;//ku-ronn
template<class T> using Lumen = CalculationType < T, CalculationID::Lumen>;
template<class T> using Watt = CalculationType < T, CalculationID::Watt>;
template<class T> using Volt = CalculationType < T, CalculationID::Watt>;
template<class T> using Radix = CalculationType < T, CalculationID::Radix>;


template<class T> T StrongGravityConstant = 6.67431;
template<class T> T WeekGravityConstant = 6.67408;
template<class T> T GravityConstantMultipler = (1.0 / 100000000000);

template<class T> T PlanckConstant_h={6.62607015e-34};
template<class T> T SI_a = 9.80665;
template<class T> T SI_c = 299792458;//(m/s
template<class T> T SI_DeltaVCs = 9192631770;//(Hz)

template<class T> T Yocto = 0.000000000000000000000001;
template<class T> T Zepto = 0.000000000000000000001;
template<class T> T Atto = 0.000000000000000001;
template<class T> T Femto= 0.000000000000001;
template<class T> T Pico = 0.000000000001;
template<class T> T Nano = 0.000000001;
template<class T> T Micro = 0.000001;
template<class T> T Milli = 0.001;
template<class T> T Centi = 0.01;
template<class T> T Deci = 0.1;
template<class T> T Zero = 0;
template<class T> T One = 1;
template<class T> T Deca = 10.0;
template<class T> T Hecto = 100.0;
template<class T> T Kilo = 1000.0;
template<class T> T Mega = 1000000.0;
template<class T> T Giga = 1000000000.0;
template<class T> T Tera = 1000000000000.0;
template<class T> T Peta = 1000000000000000.0;
template<class T> T Exa =  1000000000000000000.0;
template<class T> T Zetta= 1000000000000000000000.0;
template<class T> T Yotta= 1000000000000000000000000.0;

template<class T> Gram<T> OneJapanYen{ 1 };
template<class T> Second<T> OneMeter{1.0/299792458.0};//åıÇÃêiÇﬁë¨ìxÇÃ1/299792458
template<class T> Hertz<T> OneHertz{ 1 };//1move/second.

template<class T> Radix<T> Decimal{ 10.0 };
template<class T> Radix<T> Binary{ 2.0 };
template<class T> Radix<T> Octal{ 8.0 };
template<class T> Radix<T> Hex{ 16.0 };

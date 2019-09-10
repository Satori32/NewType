#pragma once
#include <cmath>
#include "NewType.h"

template<class T> Newton<T> MakeNewton(const Gram<T>& g,const Meter<T>& m,const Second<T>& s) { return { (m / (s*s))*g}; }
template<class T> Gravity<T> MakeGravityConstant(const Gravity<T>& G, const  Meter<T>& m, const Gram<T>& g, const Second<T>& s) { return { (G / ((m * m * m) * g * 100 * s / 100) }; }
template<class T> Volt<T> MakeVolt(const Meter<T>& M,const Gram<T>&G,const Second<T>& S,const Ampere<T>& A) { return {M*M*G*(std::pow(s,-3))*std::pow(A,-1) }; }
template<class T> Watt<T> MakeWatt(const Joule<T>& J, const Second<T>& S) { return { J / S }; }
template<class T> Watt<T> MakeWatt(const Volt<T>& V, const Ampere<T>& A) { return { V * A }; }
template<class T> Joule<T> MakeJoule(const Coulomb<T>& C, const Volt<T>& V) { return { C * V }; }
template<class T> Joule<T> MakeJoule(const Newton<T>& N, const Meter<T>& M) { return { N * M }; }
template<class T> Joule<T> MakeJoule(const Watt<T>& W, const Second<T>& S) { return { W/S }; }
template<class T> Joule<T> MakeCoulomb(const Ampere<T>& A, const Second<T>& S) { return { A*S }; }
// Stat.cpp : CStat의 구현입니다.

#include "stdafx.h"
#include "Stat.h"


// CStat


STDMETHODIMP CStat::mean(data dataInput, double * meanResult)
{
    // TODO: 여기에 구현 코드를 추가합니다.
    double sum = 0;

    for (int i = 0 ; i < 10 ; i++)
        sum += dataInput.dat[i];

    *meanResult = sum / 10.0;
    return S_OK;
}

STDMETHODIMP CStat::variance(data dataInput, double * varianceResult)
{
    // TODO: 여기에 구현 코드를 추가합니다.
    double sum = 0;

    for (int i = 0 ; i < 10 ; i++)
        sum += dataInput.dat[i];

    double mean = sum / 10.0;
    double variance = 0;

    for (int i = 0 ; i < 10 ; i++)
        variance += (dataInput.dat[i] - mean) * (dataInput.dat[i] - mean);
    variance = variance / 10.0;

    *varianceResult = variance;

    return S_OK;
}

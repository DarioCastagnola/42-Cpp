/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:19:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/30 16:43:48 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv, std::string container) {
    if (container == "vectors")
		for (int i = 1; i < argc; i++)
			this->_myVector.push_back(std::atoi(argv[i]));
    return ;
}

PmergeMe::PmergeMe(const PmergeMe &obj) {
    *this = obj;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &obj) {
	if (this == &obj)
        return *this;
    return *this;
}

PmergeMe::~PmergeMe() {
	;
}

size_t jacobsthal_diff[] = {
        2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u,
        2730u, 5462u, 10922u, 21846u, 43690u, 87382u, 174762u, 349526u, 699050u,
        1398102u, 2796202u, 5592406u, 11184810u, 22369622u, 44739242u, 89478486u,
        178956970u, 357913942u, 715827882u, 1431655766u, 2863311530u, 5726623062u,
        11453246122u, 22906492246u, 45812984490u, 91625968982u, 183251937962u,
        366503875926u, 733007751850u, 1466015503702u, 2932031007402u, 5864062014806u,
        11728124029610u, 23456248059222u, 46912496118442u, 93824992236886u, 187649984473770u,
        375299968947542u, 750599937895082u, 1501199875790165u, 3002399751580331u,
        6004799503160661u, 12009599006321322u, 24019198012642644u, 48038396025285288u,
        96076792050570576u, 192153584101141152u, 384307168202282304u, 768614336404564608u,
        1537228672809129216u, 3074457345618258432u, 6148914691236516864u
};

void PmergeMe::binaryInsert(std::vector<int>& arr, int n) {
	// to do
}

void PmergeMe::fordJohnsonII(std::vector<int>& arr, int pairsize) {
    std::cout << "pairsize = " << pairsize << std::endl;
    std::vector<int> help;
    std::vector<int> heads;
	long jac;
	
	heads.push_back(arr[pairsize / 2]);
	heads.push_back(arr[0]);
	if (pairsize != arr.size())
		heads.push_back(arr[pairsize + pairsize / 2]);
	for (int i = 1; i < sizeof(jacobsthal_diff) / sizeof(size_t); i++)
	{
		jac = jacobsthal_diff[i];
		binaryInsert();
	}

}

void PmergeMe::fordJohnson(std::vector<int>& arr, int pairsize) {
	// int l = -1;
	static int recursion = 0;
	std::cout << "recursion " << recursion++ << std::endl;
    // if (arr.size() % 2 != 0) 
    // {
    //     l = arr.back();
    //     arr.pop_back();
    // }
    for (size_t i = 0; i < arr.size(); i += pairsize)
    {
        if (arr[i] < arr[i + pairsize / 2]) {
            std::swap(arr[i], arr[i + pairsize / 2]);
			for (int j = 1; j < pairsize / 2; j++)
				std::swap(arr[i + j], arr[i + (pairsize / 2) + j]);
        }
    }
    // if (l != -1) {
    //     arr.push_back(l);
    // }
	for (size_t i = 0; arr.size() > i; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
	if (arr.size() / pairsize != 1)
		fordJohnson(arr, pairsize * 2);
}

void PmergeMe::execute() {
	fordJohnson(this->_myVector, 2);
    fordJohnsonII(this->_myVector, this->_myVector.size());
}


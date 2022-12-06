#include <vector>

bool linear_search(const std::vector<int>& vect, const int key) noexcept
{
	for( const auto& entry : vect )
	{
		if( entry == key )
		{
			return true;
		}
	}

	return false;
}

bool binary_search(const std::vector<int>& vect, const int key)
{
	auto low		= 0;
	auto high		= static_cast<int>( vect.size() ) - 1;
	auto midpoint	= [] (int a, int b) { return ( (a + b) / 2); };

	while( low <= high )
	{
		const auto mid = midpoint(low, high);

		if( vect[mid] < key )
		{
			low = mid + 1;
		}
		else if( vect[mid] > key )
		{
			high = mid - 1;
		}
		else
		{
			return true;
		}
	}

	return false;
}

std::vector<int> generate_vector( const int n )
{
	std::vector<int> vect;
	vect.resize(n);

	for( int i = 0; i < n; ++i )
	{
		vect[i] = i;
	}

	return vect;
}

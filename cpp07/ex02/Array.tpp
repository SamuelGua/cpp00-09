/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marie-evecely <marie-evecely@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:57:37 by marie-evece       #+#    #+#             */
/*   Updated: 2024/07/04 19:14:48 by marie-evece      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************************************************************************************/
/*                              Constructeur et destructeur                           */
/**************************************************************************************/

template<class T>
Array<T>::Array() : _size(10)
{
	if (this->_size == 0)
	{
		array = NULL;
		std::cerr << "Error: cannot allocate with a size of 0, array is NULL" << std::endl;
	}
	else 
	{
		std::cout << "Array default constructor is called" << std::endl;
		this->array = new T[this->_size];
	}
}
template<class T>
Array<T>::Array(size_t n) : _size(n)
{
	if (this->_size == 0)
	{
		array = NULL;
		std::cerr << "Error: cannot allocate with a size of 0, array is NULL" << std::endl;
	}
	else
	{
		std::cout << "Array constructor is called" << std::endl;
		this->array = new T[this->_size];
	}
}

template<class T>
Array<T>::Array(const Array &copy) : _size(copy._size)
{
	if (this->_size == 0)
	{
		array = NULL;
		std::cerr << "Error: cannot allocate with a size of 0, array is NULL" << std::endl;
	} else 
	{
		std::cout << "Array copy constructor is called" << std::endl;
		this->array = new T[copy._size] ;
		for (int i = 0; i < copy._size; i++)
			this->array[i] = copy.array[i];
	}
}

template<class T>
Array<T>::~Array()
{
	if (this->array)
		delete [] this->array; 
}

/**************************************************************************************/
/*                              Surcharge d'operateur                                 */
/**************************************************************************************/

template<class T>
Array<T>& Array<T>::operator=(const Array &copy)
{
	if (this != &copy && copy.size > 0)
	{
		if (copy.array)
			delete [] copy.array;
		this->array = new T[copy._size];
		for (int i = 0; i < copy._size; i++)
			this->array[i] = copy.array[i];
	}
}

template<class T>
T Array<T>::operator[](int index)
{
	if (this->_size == 0 || this->_size < index)
		throw Array::OutOfBounds();
	return (this->array[index]);
}

/**************************************************************************************/
/*                                      Methodes                                      */
/**************************************************************************************/

template<class T>
size_t Array<T>::size() const
{
	return (this->_size);
}
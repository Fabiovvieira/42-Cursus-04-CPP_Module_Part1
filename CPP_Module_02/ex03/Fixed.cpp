//
// Created by fvalli-v on 12-06-2023.
//

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0) {
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src){
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {
//	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits( void ) const{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits( int const raw ){
//	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed = rhs._fixed;
	return *this;
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->_fixed) / static_cast<float>(1 << Fixed::_numFracBits));
}

int		Fixed::toInt( void ) const{
	return (this->_fixed >> Fixed::_numFracBits);
}

Fixed::Fixed(int const num){
//	std::cout << "Int constructor called" << std::endl;
	this->_fixed = num << Fixed::_numFracBits;
}

Fixed::Fixed(float const num){
//	std::cout << "Float constructor called" << std::endl;
	this->_fixed = num * (1 << Fixed::_numFracBits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i){
	o << i.toFloat();
	return o;
}

bool	Fixed::operator>( Fixed const &rhs) const{
	if (this->toFloat() > rhs.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator<( Fixed const &rhs) const{
	if (this->toFloat() < rhs.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator>=( Fixed const &rhs) const{
	if (this->toFloat() >= rhs.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator<=( Fixed const &rhs) const{
	if (this->toFloat() <= rhs.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator==( Fixed const &rhs) const{
	if (this->toFloat() == rhs.toFloat())
		return true;
	else
		return false;
}

bool	Fixed::operator!=( Fixed const &rhs) const{
	if (this->toFloat() != rhs.toFloat())
		return true;
	else
		return false;
}

Fixed	Fixed::operator+( Fixed const &rhs) const{
	return (Fixed((this->toFloat() + rhs.toFloat())));
}

Fixed	Fixed::operator-( Fixed const &rhs) const{
	return (Fixed((this->toFloat() - rhs.toFloat())));
}

Fixed	Fixed::operator*( Fixed const &rhs) const{
	return (Fixed((this->toFloat() * rhs.toFloat())));
}

Fixed	Fixed::operator/( Fixed const &rhs) const{
	return (Fixed((this->toFloat() / rhs.toFloat())));
}

//the lowest increment from is the first bit from _fixed.
//Since here we have a resolution of 8bits
//the smallest is 2^-8 = 0,00390625
Fixed	&Fixed::operator++( void ){
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++( int ){
	Fixed	temp(*this);

	this->_fixed++;
	return (temp);
}

Fixed	&Fixed::operator--( void ){
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--( int ){
	Fixed	temp(*this);

	this->_fixed--;
	return (temp);
}


Fixed	&Fixed::min(Fixed &f1, Fixed &f2){
	if (f1 < f2)
		return f1;
	else
		return f2;
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2){
	if (f1 < f2)
		return f1;
	else
		return f2;
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2){
	if (f1 > f2)
		return f1;
	else
		return f2;
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2){
	if (f1 > f2)
		return f1;
	else
		return f2;
}

//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

class Real
{
  public:
    std::string m_Real{};
    int m_Imaginary{};

// A constructor with one argument that initializes object with a real value.
  Real(const std::string & Real, int Imaginary=10.0)
    :m_Real {Real}, m_Imaginary {Imaginary}
    {
    }
    const std::string & getReal() const{
      return m_Real;}
      int GetImaginary () const {return m_Imaginary;}
};

class Imaginary
{
  public:

  std::string m_Imaginary {};
  int m_Surreal {};

  Imaginary( const std::string & Imaginary, int Surreal =30.0)
      :m_Imaginary {Imaginary}, m_Surreal {Surreal}
  {
  }
  const std::string & getImaginary () const{
    return m_Imaginary;}
    int GetSurreal () const {return m_Surreal;}
};
 
class Surreal
{
  public:

    std::string m_Surreal {};
    int m_Real{};

    Surreal (const std::string & Surreal, int Real=10.0)
        :m_Surreal {Surreal}, m_Real {Real}
    {
    }
    const std::string & getSurreal() const{
      return m_Surreal;}
      int GetReal () const {return m_Real;}
};



//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "c1" ) {
        Real n{10.0};
        REQUIRE( n.GetReal() == 10.0 );
    }
    SECTION( "c2" ) {
        Complex n{10.0, 20.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
    }
    SECTION( "c3" ) {
        Surreal n{10.0, 20.0, 30.0};
        REQUIRE( n.GetReal() == 10.0 );
        REQUIRE( n.GetImaginary() == 20.0 );
        REQUIRE( n.GetSurreal() == 30.0 );
    }
    SECTION( "a1" ) {
        Real n{10.0};
        Real r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
    }
    SECTION( "a2" ) {
        Complex n{10.0, 20.0};
        Complex r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
    }
    SECTION( "a3" ) {
        Surreal n{10.0, 20.0, 30.0};
        Surreal r = n * 2.0;
        REQUIRE( r.GetReal() == 20.0 );
        REQUIRE( r.GetImaginary() == 40.0 );
        REQUIRE( r.GetSurreal() == 60.0 );
    }
}
//------------------------------

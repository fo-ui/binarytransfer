// 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#include "helper.h"
#ifndef _NFE_ADF_H_
#define _NFE_ADF_H_
//#define return_code void
namespace adf {
//#define size_t int
	class graph{
	public:
		graph(){};
	};
  class GMIO{
  public:
    return_code gm2aie_nb(const void* address, size_t transaction_size);

    return_code aie2gm_nb(void* address, size_t transaction_size);

  protected:
    GMIO () { };

  };

  class input_gmio : public GMIO {
    public:
      input_gmio();
    private:
      using GMIO::aie2gm_nb;
  };

  class output_gmio : public GMIO {
    public:
      output_gmio();

    private:
      using GMIO::gm2aie_nb;
  };
}
  /// SHIM location constraints for input_plio/output_plio and input_gmio/output_gmio

// Implement the gm2aie_nb function
// return_code adf::GMIO::gm2aie_nb(const void* address, size_t transaction_size) {
//     // Your implementation here
//     return; // or any other logic you need
// }

// // Implement the aie2gm_nb function
// return_code adf::GMIO::aie2gm_nb(void* address, size_t transaction_size) {
//     // Your implementation here
//     return; // or any other logic you need
// }

// // Implement the input_gmio constructor
// adf::input_gmio::input_gmio() {
//     // Initialization logic if needed
// }

// // Implement the output_gmio constructor
// adf::output_gmio::output_gmio() {
//     // Initialization logic if needed
// }

#endif
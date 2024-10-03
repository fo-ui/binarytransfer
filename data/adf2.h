// 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#include "helper.h"
namespace adf {
	
    class graph2 {
	public:
    graph2() : a(0), b(0) {} 
		graph2(size_t a, size_t b) : a(a), b(b) {}
	
    private:
        size_t a;
        size_t b;
    };

  class GMIOR{
  public:
    return_code gm2aie_nb(const void* address, size_t transaction_range_start, size_t transaction_range_end);

    return_code aie2gm_nb(void* address, size_t transaction_range_start, size_t transaction_range_end);

  protected:
    GMIOR () { };

  };

  class input_gmio2 : public GMIOR {
    public:
      input_gmio2() : stream_start(0), stream_end(0) {}
      input_gmio2(size_t a, size_t b) : stream_start(a), stream_end(b){}
    
    private:
      using GMIOR::aie2gm_nb;
    
    protected:
      size_t stream_start;
      size_t stream_end;
  };


  class output_gmio2 : public GMIOR {
    public:
      output_gmio2(size_t a, size_t b) : stream_start(a), stream_end(b){}
    
    private:
      using GMIOR::aie2gm_nb;
    
    protected:
      size_t stream_start;
      size_t stream_end;
  };
}

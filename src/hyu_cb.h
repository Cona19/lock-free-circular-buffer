#include "types.h"

struct hyu_circular_buffer_t{
	byte* buf_ptr;
	byte* buf;
	ulint buf_free;
	ulint buf_size;
	ulint aligned_buf_size;
	ulint first_block_offset;
	ulint last_block_offset;
	ulint buf_next_to_write;
};

void hyu_cb_init(hyu_circular_buffer_t* cb);
void hyu_cb_release(hyu_circular_buffer_t* cb);
void hyu_cb_push(hyu_circular_buffer_t* cb);
byte* hyu_cb_front(hyu_circular_buffer_t* cb);
ibool hyu_cb_is_full(hyu_circular_buffer_t* cb);
ibool hyu_cb_is_empty(hyu_circular_buffer_t* cb);
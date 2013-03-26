#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa8c16cf3, "module_layout" },
	{ 0x352091e6, "kmalloc_caches" },
	{ 0x77c077e7, "v4l2_event_unsubscribe" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5b170d63, "video_device_release_empty" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xc5ac94d0, "dev_set_drvdata" },
	{ 0x8be1619b, "v4l2_i2c_new_subdev" },
	{ 0x94ebe5bb, "vb2_mmap" },
	{ 0xd2eb58ba, "v4l2_device_unregister" },
	{ 0x54c7dacb, "v4l2_ctrl_handler_free" },
	{ 0x5bfe45af, "v4l2_ctrl_handler_init" },
	{ 0xc1e2a8ff, "usb_kill_urb" },
	{ 0x624a7c21, "__video_register_device" },
	{ 0x9297e8ae, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xbfb5e847, "i2c_add_adapter" },
	{ 0x755f0a8e, "v4l2_device_register" },
	{ 0x834185d2, "vb2_read" },
	{ 0x12767674, "v4l2_device_disconnect" },
	{ 0xfb578fc5, "memset" },
	{ 0x2d5458ab, "vb2_vmalloc_memops" },
	{ 0x8aa5b04c, "dev_err" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x562b9321, "usb_deregister" },
	{ 0x3e18b1c5, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xa4ba16e8, "video_unregister_device" },
	{ 0x27b2325e, "usb_set_interface" },
	{ 0xd96ed8b1, "vb2_plane_vaddr" },
	{ 0xdf89a9e1, "vb2_buffer_done" },
	{ 0xb4390f9a, "mcount" },
	{ 0xab394b6d, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5ae4fa58, "mutex_lock" },
	{ 0xddbbb80, "v4l2_fh_release" },
	{ 0xe609633, "vb2_qbuf" },
	{ 0xbc3d2398, "usb_free_coherent" },
	{ 0xe567b9c1, "vb2_querybuf" },
	{ 0xb4fb24ad, "i2c_del_adapter" },
	{ 0xd234055, "_dev_info" },
	{ 0x29e696a8, "usb_submit_urb" },
	{ 0xdef19abd, "vb2_streamon" },
	{ 0xcf891bb9, "video_devdata" },
	{ 0x79a38e61, "___ratelimit" },
	{ 0x13aa216c, "vb2_reqbufs" },
	{ 0x783c7933, "kmem_cache_alloc_trace" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x3e2b21bd, "v4l2_fh_open" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0xe681a90a, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdeb87602, "usb_register_driver" },
	{ 0xbea7f40a, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0xbafde5fc, "vb2_poll" },
	{ 0x30d8c27b, "usb_alloc_coherent" },
	{ 0xb22e95af, "vb2_queue_release" },
	{ 0xea334462, "v4l2_device_put" },
	{ 0xb73b2eb5, "vb2_streamoff" },
	{ 0x70c55916, "dev_get_drvdata" },
	{ 0x316eae64, "usb_free_urb" },
	{ 0x82558aa2, "video_ioctl2" },
	{ 0xb93b2d19, "usb_alloc_urb" },
	{ 0x3252c19f, "vb2_queue_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,videobuf2-core,videobuf2-vmalloc";

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "8491A070AE95220337900CA");

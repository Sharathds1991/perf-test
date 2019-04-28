check_inv()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_url("index.php_2", 
		"URL=http://localhost/logic/admin/index.php?load=billing/invoice&token=70071d19cafb16078de6d99bf7af6ac9&filter_name=jspiders254397%20jspiders254397", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice&token=70071d19cafb16078de6d99bf7af6ac9", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
create_pat()
{
	int fp;

lr_start_transaction("pat_cre");

		
	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(35);

	web_url("daemon_frame.php_2", 
		"URL=http://{url}/interface/main/daemon_frame.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/daemon_frame.php", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://localhost");
	
lr_start_transaction("cre_pat");
lr_rendezvous("create_rend");


	web_submit_data("new_comprehensive_save.php", 
		"Action=http://{url}/interface/new/new_comprehensive_save.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/new/new.php", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=form_cb_1", "Value=1", ENDITEM, 
		"Name=form_title", "Value=Mr.", ENDITEM, 
		"Name=form_fname", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_mname", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_lname", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_pubpid", "Value={pat_no}", ENDITEM, 
		"Name=form_DOB", "Value={year}-{month}-{day}", ENDITEM, 
		"Name=form_sex", "Value={gender}", ENDITEM, 
		"Name=form_ss", "Value={pat_name}", ENDITEM, 
		"Name=form_drivers_license", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_status", "Value=single", ENDITEM, 
		"Name=form_genericname1", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_genericval1", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_genericname2", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_genericval2", "Value={pat_name}{pat_no}", ENDITEM, 
		"Name=form_street", "Value=", ENDITEM, 
		"Name=form_city", "Value=", ENDITEM, 
		"Name=form_state", "Value=", ENDITEM, 
		"Name=form_postal_code", "Value=", ENDITEM, 
		"Name=form_country_code", "Value=", ENDITEM, 
		"Name=form_mothersname", "Value=", ENDITEM, 
		"Name=form_guardiansname", "Value=", ENDITEM, 
		"Name=form_contact_relationship", "Value=", ENDITEM, 
		"Name=form_phone_contact", "Value=", ENDITEM, 
		"Name=form_phone_home", "Value=", ENDITEM, 
		"Name=form_phone_biz", "Value=", ENDITEM, 
		"Name=form_phone_cell", "Value=", ENDITEM, 
		"Name=form_email", "Value=", ENDITEM, 
		"Name=form_email_direct", "Value=", ENDITEM, 
		"Name=form_providerID", "Value=", ENDITEM, 
		"Name=form_ref_providerID", "Value=", ENDITEM, 
		"Name=form_pharmacy_id", "Value=0", ENDITEM, 
		"Name=form_hipaa_notice", "Value=", ENDITEM, 
		"Name=form_hipaa_voice", "Value=", ENDITEM, 
		"Name=form_hipaa_message", "Value=", ENDITEM, 
		"Name=form_hipaa_mail", "Value=", ENDITEM, 
		"Name=form_hipaa_allowsms", "Value=", ENDITEM, 
		"Name=form_hipaa_allowemail", "Value=", ENDITEM, 
		"Name=form_allow_imm_reg_use", "Value=", ENDITEM, 
		"Name=form_allow_imm_info_share", "Value=", ENDITEM, 
		"Name=form_allow_health_info_ex", "Value=", ENDITEM, 
		"Name=form_allow_patient_portal", "Value=", ENDITEM, 
		"Name=form_cmsportal_login", "Value=", ENDITEM, 
		"Name=form_occupation", "Value=", ENDITEM, 
		"Name=form_em_name", "Value=", ENDITEM, 
		"Name=form_em_street", "Value=", ENDITEM, 
		"Name=form_em_city", "Value=", ENDITEM, 
		"Name=form_em_state", "Value=", ENDITEM, 
		"Name=form_em_postal_code", "Value=", ENDITEM, 
		"Name=form_em_country", "Value=", ENDITEM, 
		"Name=form_language", "Value=", ENDITEM, 
		"Name=form_ethnicity", "Value=", ENDITEM, 
		"Name=form_financial_review", "Value=", ENDITEM, 
		"Name=form_family_size", "Value=", ENDITEM, 
		"Name=form_monthly_income", "Value=", ENDITEM, 
		"Name=form_homeless", "Value=", ENDITEM, 
		"Name=form_interpretter", "Value=", ENDITEM, 
		"Name=form_migrantseasonal", "Value=", ENDITEM, 
		"Name=form_referral_source", "Value=", ENDITEM, 
		"Name=form_vfc", "Value=", ENDITEM, 
		"Name=form_deceased_date", "Value=", ENDITEM, 
		"Name=form_deceased_reason", "Value=", ENDITEM, 
		"Name=i1provider", "Value=", ENDITEM, 
		"Name=i1plan_name", "Value=", ENDITEM, 
		"Name=i1effective_date", "Value=", ENDITEM, 
		"Name=i1policy_number", "Value=", ENDITEM, 
		"Name=i1group_number", "Value=", ENDITEM, 
		"Name=i1subscriber_employer", "Value=", ENDITEM, 
		"Name=i1subscriber_employer_street", "Value=", ENDITEM, 
		"Name=i1subscriber_employer_city", "Value=", ENDITEM, 
		"Name=form_i1subscriber_employer_state", "Value=", ENDITEM, 
		"Name=i1subscriber_employer_postal_code", "Value=", ENDITEM, 
		"Name=form_i1subscriber_employer_country", "Value=", ENDITEM, 
		"Name=i1subscriber_fname", "Value=", ENDITEM, 
		"Name=i1subscriber_mname", "Value=", ENDITEM, 
		"Name=i1subscriber_lname", "Value=", ENDITEM, 
		"Name=form_i1subscriber_relationship", "Value=", ENDITEM, 
		"Name=i1subscriber_DOB", "Value=", ENDITEM, 
		"Name=i1subscriber_ss", "Value=", ENDITEM, 
		"Name=form_i1subscriber_sex", "Value=", ENDITEM, 
		"Name=i1subscriber_street", "Value=", ENDITEM, 
		"Name=i1subscriber_city", "Value=", ENDITEM, 
		"Name=form_i1subscriber_state", "Value=", ENDITEM, 
		"Name=i1subscriber_postal_code", "Value=", ENDITEM, 
		"Name=form_i1subscriber_country", "Value=", ENDITEM, 
		"Name=i1subscriber_phone", "Value=", ENDITEM, 
		"Name=i1copay", "Value=", ENDITEM, 
		"Name=i1accept_assignment", "Value=TRUE", ENDITEM, 
		"Name=i2provider", "Value=", ENDITEM, 
		"Name=i2plan_name", "Value=", ENDITEM, 
		"Name=i2effective_date", "Value=", ENDITEM, 
		"Name=i2policy_number", "Value=", ENDITEM, 
		"Name=i2group_number", "Value=", ENDITEM, 
		"Name=i2subscriber_employer", "Value=", ENDITEM, 
		"Name=i2subscriber_employer_street", "Value=", ENDITEM, 
		"Name=i2subscriber_employer_city", "Value=", ENDITEM, 
		"Name=form_i2subscriber_employer_state", "Value=", ENDITEM, 
		"Name=i2subscriber_employer_postal_code", "Value=", ENDITEM, 
		"Name=form_i2subscriber_employer_country", "Value=", ENDITEM, 
		"Name=i2subscriber_fname", "Value=", ENDITEM, 
		"Name=i2subscriber_mname", "Value=", ENDITEM, 
		"Name=i2subscriber_lname", "Value=", ENDITEM, 
		"Name=form_i2subscriber_relationship", "Value=", ENDITEM, 
		"Name=i2subscriber_DOB", "Value=", ENDITEM, 
		"Name=i2subscriber_ss", "Value=", ENDITEM, 
		"Name=form_i2subscriber_sex", "Value=", ENDITEM, 
		"Name=i2subscriber_street", "Value=", ENDITEM, 
		"Name=i2subscriber_city", "Value=", ENDITEM, 
		"Name=form_i2subscriber_state", "Value=", ENDITEM, 
		"Name=i2subscriber_postal_code", "Value=", ENDITEM, 
		"Name=form_i2subscriber_country", "Value=", ENDITEM, 
		"Name=i2subscriber_phone", "Value=", ENDITEM, 
		"Name=i2copay", "Value=", ENDITEM, 
		"Name=i2accept_assignment", "Value=TRUE", ENDITEM, 
		"Name=i3provider", "Value=", ENDITEM, 
		"Name=i3plan_name", "Value=", ENDITEM, 
		"Name=i3effective_date", "Value=", ENDITEM, 
		"Name=i3policy_number", "Value=", ENDITEM, 
		"Name=i3group_number", "Value=", ENDITEM, 
		"Name=i3subscriber_employer", "Value=", ENDITEM, 
		"Name=i3subscriber_employer_street", "Value=", ENDITEM, 
		"Name=i3subscriber_employer_city", "Value=", ENDITEM, 
		"Name=form_i3subscriber_employer_state", "Value=", ENDITEM, 
		"Name=i3subscriber_employer_postal_code", "Value=", ENDITEM, 
		"Name=form_i3subscriber_employer_country", "Value=", ENDITEM, 
		"Name=i3subscriber_fname", "Value=", ENDITEM, 
		"Name=i3subscriber_mname", "Value=", ENDITEM, 
		"Name=i3subscriber_lname", "Value=", ENDITEM, 
		"Name=form_i3subscriber_relationship", "Value=", ENDITEM, 
		"Name=i3subscriber_DOB", "Value=", ENDITEM, 
		"Name=i3subscriber_ss", "Value=", ENDITEM, 
		"Name=form_i3subscriber_sex", "Value=", ENDITEM, 
		"Name=i3subscriber_street", "Value=", ENDITEM, 
		"Name=i3subscriber_city", "Value=", ENDITEM, 
		"Name=form_i3subscriber_state", "Value=", ENDITEM, 
		"Name=i3subscriber_postal_code", "Value=", ENDITEM, 
		"Name=form_i3subscriber_country", "Value=", ENDITEM, 
		"Name=i3subscriber_phone", "Value=", ENDITEM, 
		"Name=i3copay", "Value=", ENDITEM, 
		"Name=i3accept_assignment", "Value=TRUE", ENDITEM, 
		LAST);
lr_end_transaction("cre_pat", LR_AUTO);


	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("demographics.php", 
		"URL=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/new/new_comprehensive_save.php", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://localhost");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("dated_reminders.php_3", 
		"Action=http://{url}/interface/main/dated_reminders/dated_reminders.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/messages/messages.php?form_active=1", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=drR", "Value=0", ENDITEM, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		LAST);

	web_url("disc_fragment.php", 
		"URL=http://{url}/interface/patient_file/summary/disc_fragment.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("vitals_fragment.php", 
		"URL=http://{url}/interface/patient_file/summary/vitals_fragment.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("patient_reminders_fragment.php", 
		"URL=http://{url}/interface/patient_file/summary/patient_reminders_fragment.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("pnotes_fragment.php", 
		"URL=http://{url}/interface/patient_file/summary/pnotes_fragment.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost");

	web_submit_data("stats.php", 
		"Action=http://{url}/interface/patient_file/summary/stats.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=embeddedScreen", "Value=true", ENDITEM, 
		LAST);

	web_submit_data("clinical_reminders_fragment.php", 
		"Action=http://{url}/interface/patient_file/summary/clinical_reminders_fragment.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=embeddedScreen", "Value=true", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("encounters.php", 
		"URL=http://{url}/interface/patient_file/history/encounters.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("labdata_fragment.php", 
		"URL=http://{url}/interface/patient_file/summary/labdata_fragment.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/patient_file/summary/demographics.php?set_pid=67&is_new=1", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost");

	web_submit_data("dated_reminders_counter.php_3", 
		"Action=http://{url}/library/ajax/dated_reminders_counter.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("execute_background_services.php_3", 
		"Action=http://{url}/library/ajax/execute_background_services.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://{url}/interface/main/left_nav.php", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=skip_timeout_reset", "Value=1", ENDITEM, 
		"Name=ajax", "Value=1", ENDITEM, 
		LAST);


	lr_end_transaction("pat_cre", LR_AUTO);
	

	
	fp = fopen("pat_details.csv", "a+"); 
	fprintf(fp, "%s%s,%s,%s,%s-%s-%s\n", lr_eval_string("{pat_name}"),lr_eval_string("{pat_no}"),lr_eval_string("{pat_no}"),lr_eval_string("{gender}"),lr_eval_string("{year}"),lr_eval_string("{month}"),lr_eval_string("{day}"));
    fclose(fp);

	return 0;
}

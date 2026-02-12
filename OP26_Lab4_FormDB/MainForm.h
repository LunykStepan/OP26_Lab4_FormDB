#pragma once

namespace Lab4_Furniture {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; 
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ lblName;
		System::Windows::Forms::Label^ lblType;
		System::Windows::Forms::Label^ lblBrand;
		System::Windows::Forms::Label^ lblManufacturer;
		System::Windows::Forms::Label^ lblSupplier;
		System::Windows::Forms::Label^ lblPrice;

		System::Windows::Forms::TextBox^ txtName;
		System::Windows::Forms::TextBox^ txtType;
		System::Windows::Forms::TextBox^ txtBrand;
		System::Windows::Forms::TextBox^ txtManufacturer;
		System::Windows::Forms::TextBox^ txtSupplier;
		System::Windows::Forms::TextBox^ txtPrice;

		System::Windows::Forms::Button^ btnAdd;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->lblBrand = (gcnew System::Windows::Forms::Label());
			this->lblManufacturer = (gcnew System::Windows::Forms::Label());
			this->lblSupplier = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtType = (gcnew System::Windows::Forms::TextBox());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->txtManufacturer = (gcnew System::Windows::Forms::TextBox());
			this->txtSupplier = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(20, 23);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(39, 13);
			this->lblName->TabIndex = 0;
			this->lblName->Text = L"Назва";
			this->lblType->AutoSize = true;
			this->lblType->Location = System::Drawing::Point(20, 53);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(26, 13);
			this->lblType->TabIndex = 1;
			this->lblType->Text = L"Вид";
			this->lblBrand->AutoSize = true;
			this->lblBrand->Location = System::Drawing::Point(20, 83);
			this->lblBrand->Name = L"lblBrand";
			this->lblBrand->Size = System::Drawing::Size(40, 13);
			this->lblBrand->TabIndex = 2;
			this->lblBrand->Text = L"Марка";
			this->lblManufacturer->AutoSize = true;
			this->lblManufacturer->Location = System::Drawing::Point(20, 113);
			this->lblManufacturer->Name = L"lblManufacturer";
			this->lblManufacturer->Size = System::Drawing::Size(56, 13);
			this->lblManufacturer->TabIndex = 3;
			this->lblManufacturer->Text = L"Виробник";
			this->lblSupplier->AutoSize = true;
			this->lblSupplier->Location = System::Drawing::Point(20, 143);
			this->lblSupplier->Name = L"lblSupplier";
			this->lblSupplier->Size = System::Drawing::Size(79, 13);
			this->lblSupplier->TabIndex = 4;
			this->lblSupplier->Text = L"Постачальник";
			this->lblPrice->AutoSize = true;
			this->lblPrice->Location = System::Drawing::Point(20, 173);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(29, 13);
			this->lblPrice->TabIndex = 5;
			this->lblPrice->Text = L"Ціна";
			this->txtName->Location = System::Drawing::Point(140, 20);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(180, 20);
			this->txtName->TabIndex = 6;
			this->txtType->Location = System::Drawing::Point(140, 50);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(180, 20);
			this->txtType->TabIndex = 7;
			this->txtBrand->Location = System::Drawing::Point(140, 80);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(180, 20);
			this->txtBrand->TabIndex = 8;
			this->txtManufacturer->Location = System::Drawing::Point(140, 110);
			this->txtManufacturer->Name = L"txtManufacturer";
			this->txtManufacturer->Size = System::Drawing::Size(180, 20);
			this->txtManufacturer->TabIndex = 9;
			this->txtSupplier->Location = System::Drawing::Point(140, 140);
			this->txtSupplier->Name = L"txtSupplier";
			this->txtSupplier->Size = System::Drawing::Size(180, 20);
			this->txtSupplier->TabIndex = 10;
			this->txtPrice->Location = System::Drawing::Point(140, 170);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(180, 20);
			this->txtPrice->TabIndex = 11;
			this->btnAdd->Location = System::Drawing::Point(140, 210);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Додати";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainForm::btnAdd_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 270);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtSupplier);
			this->Controls->Add(this->txtManufacturer);
			this->Controls->Add(this->txtBrand);
			this->Controls->Add(this->txtType);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblSupplier);
			this->Controls->Add(this->lblManufacturer);
			this->Controls->Add(this->lblBrand);
			this->Controls->Add(this->lblType);
			this->Controls->Add(this->lblName);
			this->Name = L"MainForm";
			this->Text = L"Меблі (Варіант 12)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

			if (txtName->Text == "" || txtType->Text == "" || txtBrand->Text == "" ||
				txtManufacturer->Text == "" || txtSupplier->Text == "" || txtPrice->Text == "")
			{
				MessageBox::Show("Будь ласка, заповніть усі поля!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			try {
				String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=FurnitureDB;Integrated Security=True";
				SqlConnection^ con = gcnew SqlConnection(connectionString);

				con->Open();

				String^ query = "INSERT INTO Furniture (Name, Type, Brand, Manufacturer, Supplier, Price) " +
					"VALUES (@nm, @tp, @br, @mn, @sp, @pr)";

				SqlCommand^ cmd = gcnew SqlCommand(query, con);

				cmd->Parameters->AddWithValue("@nm", txtName->Text);
				cmd->Parameters->AddWithValue("@tp", txtType->Text);
				cmd->Parameters->AddWithValue("@br", txtBrand->Text);
				cmd->Parameters->AddWithValue("@mn", txtManufacturer->Text);
				cmd->Parameters->AddWithValue("@sp", txtSupplier->Text);

				try {
					cmd->Parameters->AddWithValue("@pr", Convert::ToDecimal(txtPrice->Text));
				}
				catch (Exception^) {
					MessageBox::Show("Ціна має бути числом (наприклад: 1200,50)", "Помилка формату");
					con->Close();
					return;
				}

				cmd->ExecuteNonQuery();
				con->Close();

				MessageBox::Show("Запис успішно додано!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);

				txtName->Clear();
				txtType->Clear();
				txtBrand->Clear();
				txtManufacturer->Clear();
				txtSupplier->Clear();
				txtPrice->Clear();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Помилка бази даних:\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};
}
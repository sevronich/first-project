            async function askAI() {
  const question = document.getElementById("userQuestion").value;
  const responseArea = document.getElementById("aiResponse");

  // ១. បង្ហាញថា AI កំពុងគិត
  responseArea.innerText = "កំពុងគិត...";

  // ២. ភ្ជាប់ទៅកាន់ Gemini API (ប្អូនត្រូវមាន API Key ពី Google AI Studio)
  const apiKey = "AIzaSyDnBMpz3XxrJLMz9Es-JCt-D771Pb5qtF8"; 
  const genAI = new GoogleGenerativeAI(apiKey);
  const model = genAI.getGenerativeModel({ model: "gemini-pro" });

  // ៣. បញ្ជូនសំណួរ និងទទួលចម្លើយ
  const result = await model.generateContent(question);
  const response = await result.response;
  
  // ៤. បង្ហាញចម្លើយលើអេក្រង់
  responseArea.innerText = response.text();
}
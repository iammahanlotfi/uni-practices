import FirstPractice from "./components/FirstPractice";
import { Routes , Route } from "react-router";
import HomePage from "./components/HomePage";
import PageNotFound from "./components/PageNotFound";
function App() {
  
  return (
    <Routes>
      <Route path="/" element = {<FirstPractice/>}/>
      <Route path="/*" element = {<PageNotFound/>}/>
    </Routes>
  )
}

export default App; 


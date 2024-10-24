function Hello() {
  let myName = "Ayush";
  let Number = 45;
  let fullName = () => {
    return "Ayush Singh Rajput";
  };
  return (
    <p>
      MessageNo: {Number}, I am your Master {fullName()}
    </p>
  );
}
export default Hello;

//pages/Home.jsx
import { Link } from "react-router-dom";
import { Container, Button, Typography } from "@mui/material";

function Home() {
  return (
    <Container style={{ textAlign: "center", marginTop: "50px" }}>
      <Typography variant="h4" gutterBottom>
        Welcome to E-Health Records
      </Typography>
      <Button variant="contained" color="primary" component={Link} to="/records">
        View Records
      </Button>
    </Container>
  );
}

export default Home;

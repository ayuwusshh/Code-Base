import { Container, Typography, Paper } from "@mui/material";

function Records() {
  return (
    <Container style={{ marginTop: "20px" }}>
      <Typography variant="h5">Your Health Records</Typography>
      <Paper style={{ padding: "20px", marginTop: "10px" }}>
        <Typography>No records found. Add new records soon!</Typography>
      </Paper>
    </Container>
  );
}

export default Records;

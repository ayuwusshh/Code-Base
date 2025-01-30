import { Container, Typography } from "@mui/material";

function NotFound() {
  return (
    <Container style={{ textAlign: "center", marginTop: "50px" }}>
      <Typography variant="h4" color="error">
        404 - Page Not Found
      </Typography>
    </Container>
  );
}

export default NotFound; // ✅ Ensure this is present

package main

// Auto-generated | 2026-05-13T20:32:55.359562
import "fmt"

func Process_461() int {
    base := 309
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_461())
}

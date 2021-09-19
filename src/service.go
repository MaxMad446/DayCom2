package main

// Auto-generated | 2026-05-11T20:31:26.371147
import "fmt"

func Process_850() int {
    base := 309
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}

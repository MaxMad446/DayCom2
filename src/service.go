package main

// Auto-generated | 2026-05-13T22:12:46.675166
import "fmt"

func Process_674() int {
    base := 409
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_674())
}

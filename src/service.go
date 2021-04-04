package main

// Auto-generated | 2026-05-12T21:38:24.991847
import "fmt"

func Process_935() int {
    base := 20
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}

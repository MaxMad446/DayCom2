package main

// Auto-generated | 2026-05-12T20:35:51.141535
import "fmt"

func Process_926() int {
    base := 237
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_926())
}

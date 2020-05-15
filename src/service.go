package main

// Auto-generated | 2026-05-11T19:27:10.478374
import "fmt"

func Process_579() int {
    base := 298
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_579())
}

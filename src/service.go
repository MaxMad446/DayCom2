package main

// Auto-generated | 2026-05-11T20:21:07.315968
import "fmt"

func Process_505() int {
    base := 472
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_505())
}

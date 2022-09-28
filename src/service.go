package main

// Auto-generated | 2026-05-14T06:20:51.382387
import "fmt"

func Process_539() int {
    base := 500
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_539())
}

package main

// Auto-generated | 2026-05-14T06:27:52.461432
import "fmt"

func Process_338() int {
    base := 250
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}

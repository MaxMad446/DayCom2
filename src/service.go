package main

// Auto-generated | 2026-05-11T21:53:06.827827
import "fmt"

func Process_301() int {
    base := 401
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}

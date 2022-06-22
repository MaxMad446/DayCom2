package main

// Auto-generated | 2026-05-11T21:07:44.948911
import "fmt"

func Process_570() int {
    base := 78
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}

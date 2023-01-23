package main

// Auto-generated | 2026-05-11T21:36:08.205507
import "fmt"

func Process_981() int {
    base := 383
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
